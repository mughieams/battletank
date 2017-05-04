#ifndef Level_h
#define Level_h
                //                     1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 3 3 3 3 3
                //   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
int map[34][34]= {  {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},  //1
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //2
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //3
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //4
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //5
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //6
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //7
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //8
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //9
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //10
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //11
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //12
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //13
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //14
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //15
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //16
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //17
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //18
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //19
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //20
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //21
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //22
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //23
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //24
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //25
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //26
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //27
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //28
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //29
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //30
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //31
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //32
                    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2},  //33
                    {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}}; //34

                //                     1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2 3 3 3 3 3
                //   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
int level1[34][34]={{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},  //1
                    {2,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,3,3,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,2},  //2
                    {2,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,3,3,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,2},  //3
                    {2,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,2},  //4
                    {2,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,2},  //5
                    {2,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,2},  //6
                    {2,1,1,0,0,4,4,0,0,1,1,3,3,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,2},  //7
                    {2,1,1,0,0,4,4,0,0,1,1,3,3,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,2},  //8
                    {2,1,1,0,0,4,4,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,2},  //9
                    {2,1,1,0,0,4,4,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,2},  //10
                    {2,1,1,0,0,1,1,1,1,1,1,0,0,2,2,2,2,2,2,2,2,0,0,1,1,0,0,1,1,0,0,0,0,2},  //11
                    {2,1,1,0,0,1,1,1,1,1,1,0,0,2,2,2,2,2,2,2,2,0,0,1,1,0,0,1,1,0,0,0,0,2},  //12
                    {2,1,1,0,0,0,0,0,0,1,1,0,0,3,3,0,0,0,0,1,1,0,0,1,1,0,0,1,1,2,2,0,0,2},  //13
                    {2,1,1,0,0,0,0,0,0,1,1,0,0,3,3,0,0,0,0,1,1,0,0,1,1,0,0,1,1,2,2,0,0,2},  //14
                    {2,1,1,0,0,2,2,0,0,1,1,0,0,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,2,2,0,0,2},  //15
                    {2,1,1,0,0,2,2,0,0,1,1,0,0,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,2,2,0,0,2},  //16
                    {2,1,1,0,0,2,2,0,0,1,1,0,0,1,1,0,0,0,0,1,1,0,0,1,1,0,0,1,1,2,2,0,0,2},  //17
                    {2,1,1,0,0,2,2,0,0,1,1,0,0,1,1,0,0,0,0,1,1,0,0,1,1,0,0,1,1,2,2,0,0,2},  //18
                    {2,1,1,0,0,2,2,0,0,1,1,0,0,1,1,0,0,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,2},  //19
                    {2,1,1,0,0,2,2,0,0,1,1,0,0,1,1,0,0,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,2},  //20
                    {2,0,0,0,0,2,2,0,0,1,1,0,0,1,1,0,0,0,0,3,3,0,0,1,1,0,0,1,1,0,0,1,1,2},  //21
                    {2,0,0,0,0,2,2,0,0,1,1,0,0,1,1,0,0,0,0,3,3,0,0,1,1,0,0,1,1,0,0,1,1,2},  //22
                    {2,1,1,1,1,1,1,0,0,1,1,0,0,2,2,2,2,2,2,2,2,0,0,1,1,0,0,1,1,0,0,1,1,2},  //23
                    {2,1,1,1,1,1,1,0,0,1,1,0,0,2,2,2,2,2,2,2,2,0,0,1,1,0,0,1,1,0,0,1,1,2},  //24
                    {2,1,1,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,1,1,2},  //25
                    {2,1,1,0,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,0,0,1,1,2},  //26
                    {2,1,1,0,0,1,1,1,1,1,1,1,1,0,0,1,3,3,1,0,0,4,4,4,4,0,0,1,1,0,0,1,1,2},  //27
                    {2,1,1,0,0,1,1,1,1,1,1,1,1,0,0,1,3,3,1,0,0,4,4,4,4,0,0,1,1,0,0,0,0,2},  //28
                    {2,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,3,3,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,2},  //29
                    {2,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,0,0,2},  //30
                    {2,0,0,1,1,1,1,1,0,0,1,1,1,0,0,1,1,1,1,0,0,0,1,1,1,0,0,1,1,1,1,0,0,2},  //31
                    {2,0,0,1,1,1,1,1,0,0,1,1,1,0,0,1,5,5,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,2},  //32
                    {2,0,0,1,1,1,1,1,0,0,1,1,1,0,0,1,5,5,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,2},  //33
                    {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}}; //34


#endif // Level_h
