﻿

#pragma checksum "C:\Users\BIBOUH\git\Projects-Rabah\C#\MastroAppNtiers\MastroAppNtiers\BlankPage.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "A7C8FA636BE31FDD6DBF8FA67D157153"
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using Windows.Foundation;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Markup;

namespace MastroAppNtiers
{
    public partial class BlankPage : Windows.UI.Xaml.Controls.Page, IComponentConnector
    {
        [System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.Windows.UI.Xaml.Build.Tasks"," 4.0.0.0")]
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
 
        public void Connect(int connectionId, object target)
        {
            switch(connectionId)
            {
            case 1:
                #line 11 "..\..\BlankPage.xaml"
                ((Windows.UI.Xaml.Controls.Primitives.ButtonBase)(target)).Click += this.LoadButton_Click;
                 #line default
                 #line hidden
                break;
            case 2:
                #line 24 "..\..\BlankPage.xaml"
                ((Windows.UI.Xaml.Controls.Primitives.Selector)(target)).SelectionChanged += this.ElementsEdit_SelectionChanged;
                 #line default
                 #line hidden
                break;
            case 3:
                #line 25 "..\..\BlankPage.xaml"
                ((Windows.UI.Xaml.Controls.Primitives.Selector)(target)).SelectionChanged += this.VillesEdit_SelectionChanged;
                 #line default
                 #line hidden
                break;
            }
            this._contentLoaded = true;
        }
    }
}


