    int rSquare;
    // %f 匹配浮点型数据
    scanf("%d",&rSquare);
    int num = 0;
    for(int i=-rSquare;i<=rSquare;i++){
        for(int j=-rSquare;j<=rSquare;j++){
            if (i*i+j*j==rSquare){
                num++;
            }
        }
    }
    printf("%d", num);