/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/FBDialog.h>

@protocol FBLoginDialogDelegate;
@interface FBLoginDialog : FBDialog {

	id<FBLoginDialogDelegate> _loginDelegate;

}

@property (assign,nonatomic) id<FBLoginDialogDelegate> loginDelegate;              //@synthesize loginDelegate=_loginDelegate - In the implementation block
-(id)initWithURL:(id)arg1 loginParams:(id)arg2 delegate:(id)arg3 ;
-(void)dialogDidSucceed:(id)arg1 ;
-(id<FBLoginDialogDelegate>)loginDelegate;
-(void)setLoginDelegate:(id<FBLoginDialogDelegate>)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)dialogDidCancel:(id)arg1 ;
@end
