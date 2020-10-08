priority()
{
 push(a[i]);
 int j=i+1;
if(a[j]=='+')|| && (stack[top]=='*' || stack[top]=='/' || stack[top]='-')
{
      while(top!='(')
            {
                pop();
            }
    push(a[i]);
}
else if(a[j]=='-'|| )&& (stack[top]=='*') || (stack[top]=='/'||stack[top]='+'))
{
    while(top!='(')
            {
                pop();
            }
    push(a[j]);
}
else if(a[j]=='*') && (stack[top]=='/'))||(a[j]=='/'  && (stack[top]=='*'))
    {
    pop();
    push(a[j]);
    }
    else
    {
    push(a[j]);
    }
