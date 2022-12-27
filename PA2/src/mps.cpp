#include "mps.h"

bool cmp(vector<int>a,vector<int>b){
    return a[0] < b[0];
}

MPS::MPS():size(0),connection(0),answer(0){}

void MPS::MPS_read_file(const char *input_file){
    fstream fin;
    fin.open(input_file, ios::in);
    fin >> size;
    connection = new int[size]();
    answer = new int*[size];
    for (int i = 0; i < size; i++){
        answer[i] = new int[size]();
    }
    
    int point1, point2;
    while(fin >> point1 >> point2){
        connection[point1] = point2;
        connection[point2] = point1;
    }
    fin.close();
}

void MPS::MPS_write_file(const char *output_file){
    fstream fout;
    fout.open(output_file, ios::out);
    sort(chords.begin(), chords.end(), cmp);

    cout << answer[0][size - 1]/100 << endl;
    fout << chords.size() << "\n";
    for (int i = 0; i < chords.size();i++){
        fout << chords[i][0] << " " << chords[i][1] << "\n";
    }
    fout.close();
}   

MPS::~MPS(){
    for (int i = 0; i < size;i++){
        delete[] answer[i];
    }
    delete[] answer;
    delete[] connection;
}

void MPS::MPS_find_chord(int i,int j){
    if(i == j){
        return;
    }
    else{
        if(answer[i][j]%100 == 41){
            //case4
            vector<int> temp;
            temp.push_back(connection[j]);
            temp.push_back(j);
            chords.push_back(temp);
        }
        else if(answer[i][j]%100 == 31){
            //case3
            vector<int> temp;
            temp.push_back(connection[j]);
            temp.push_back(j);
            chords.push_back(temp);
            MPS_find_chord(i, connection[j] - 1);
            MPS_find_chord(connection[j] + 1, j-1);
        }
        else if(answer[i][j]%100 == 21){
            //case2
            vector<int> temp;
            temp.push_back(connection[j]);
            temp.push_back(j);
            chords.push_back(temp);
            MPS_find_chord(i + 1, j - 1);
        }   
        else if(answer[i][j]%100 == 11){
            //case1
            MPS_find_chord(i, j - 1);
        }
        else if(answer[i][j]!=1){
            // didn't match any case in MPS_top_down
            // should be wrong
            cout << "error" << endl;
        }
    }
    return;
}

int MPS::MPS_top_down(int i,int j){
    if(answer[i][j]%10 == 1){
        return answer[i][j]/10;
    }
    else if(i == j){
        answer[i][j] = 0; // case0
        answer[i][j]++;
    }
    else if(i == j - 1){
        if(connection[j] == i){
            // chord(i,j) exists
            answer[i][j] = 1*100;
            answer[i][j] += 4 * 10; // case4
            answer[i][j]++;
        }
        else{
            answer[i][j] = 0;   // case0
            answer[i][j]++;
        }
    }
    else{
        int k = connection[j]; // point that connects to j
        
        if(k < i || k > j){
            //case1
            answer[i][j] = (MPS_top_down(i,j-1)/10) * 100;
            answer[i][j] += 1 * 10; // case1
            answer[i][j]++;
        }       
        else if(k == i){
            //case2
            answer[i][j] = (MPS_top_down(i+1,j-1)/10 + 1) * 100;
            answer[i][j] += 2 * 10; // case2
            answer[i][j]++;
        } 
        else{     
            if(answer[i][j-1]%10 == 0){
                MPS_top_down(i, j - 1);
            }

            if(answer[i][k-1]%10 == 0){
                MPS_top_down(i, k - 1);
            }

            if(answer[k+1][j-1]%10 == 0){
                MPS_top_down(k+1, j - 1);
            }

            if(answer[i][j-1]/100 > answer[i][k-1]/100 + answer[k+1][j-1]/100 + 1){
                answer[i][j] = (answer[i][j-1]/100) * 100;
                answer[i][j] += 1 * 10; //case1 (i,j-1)
                answer[i][j]++;
            }
            else{
                answer[i][j] = (answer[i][k-1]/100 + answer[k+1][j-1]/100 + 1) * 100;
                answer[i][j] += 3 * 10; //case3
                answer[i][j]++;
            }
        }
    }
    return answer[i][j]/10;
}