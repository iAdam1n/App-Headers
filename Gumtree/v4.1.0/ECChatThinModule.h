/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:19 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECThinModule.h>

@protocol ECChatViewModelDelegate;
@class ECChatViewModel, ECMulticastDelegate;

@interface ECChatThinModule : ECThinModule {

	ECChatViewModel* _chatViewModel;
	ECMulticastDelegate*<ECChatViewModelDelegate> _viewModelDelegate;

}

@property (nonatomic,retain) ECChatViewModel * chatViewModel;                                              //@synthesize chatViewModel=_chatViewModel - In the implementation block
@property (nonatomic,retain) ECMulticastDelegate*<ECChatViewModelDelegate> viewModelDelegate;              //@synthesize viewModelDelegate=_viewModelDelegate - In the implementation block
-(id)tabBarIcon;
-(id)selectedTabBarIcon;
-(void)createRootViewController;
-(ECMulticastDelegate*<ECChatViewModelDelegate>)viewModelDelegate;
-(void)setViewModelDelegate:(ECMulticastDelegate*<ECChatViewModelDelegate>)arg1 ;
-(ECChatViewModel *)chatViewModel;
-(void)setChatViewModel:(ECChatViewModel *)arg1 ;
-(id)getNewDialogController;
-(id)newDialogControllerForAd:(id)arg1 ;
-(id)newDialogControllerForDialog:(id)arg1 ;
-(id)navigationBarTitle;
-(id)init;
-(id)name;
-(id)identifier;
-(Class)rootViewControllerClass;
@end
