/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECChatViewModelDelegate
@optional
-(BOOL)viewIsPresenting:(id)arg1;
-(void)viewModel:(id)arg1 didUpdateDialog:(id)arg2;
-(BOOL)viewModel:(id)arg1 didReceiveMessage:(id)arg2 forDialog:(id)arg3;
-(void)viewModel:(id)arg1 didLoadAdDetails:(id)arg2 forDialog:(id)arg3;
-(void)viewModel:(id)arg1 didSendMessage:(id)arg2 withSuccess:(BOOL)arg3;
-(void)viewModel:(id)arg1 navigateToAdDetails:(id)arg2;
-(void)viewModel:(id)arg1 deletedDialog:(id)arg2 withSuccess:(BOOL)arg3;
-(void)viewModel:(id)arg1 navigateToDialogDetailsForDialog:(id)arg2 viaPushNotification:(BOOL)arg3;
-(void)viewModelNavigateToPostFlow:(id)arg1;
-(void)viewModelDidReceiveUserDialogs:(id)arg1;

@end

