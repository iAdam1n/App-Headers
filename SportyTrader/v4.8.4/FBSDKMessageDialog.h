/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBSDKSharingDialog.h>

@protocol FBSDKSharingDelegate, FBSDKSharingContent;
@class NSString;

@interface FBSDKMessageDialog : NSObject <FBSDKSharingDialog> {

	BOOL _shouldFailOnDataError;
	id<FBSDKSharingDelegate> _delegate;
	id<FBSDKSharingContent> _shareContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSDKSharingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent;                    //@synthesize shareContent=_shareContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFailOnDataError;                            //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
+(id)showWithContent:(id)arg1 delegate:(id)arg2 ;
+(void)initialize;
-(BOOL)canShow;
-(void)_invokeDelegateDidFailWithError:(id)arg1 ;
-(void)_logDialogShow;
-(BOOL)_canShowNative;
-(void)_invokeDelegateDidCompleteWithResults:(id)arg1 ;
-(BOOL)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(BOOL)arg1 ;
-(void)_handleCompletionWithDialogResults:(id)arg1 response:(id)arg2 ;
-(void)_invokeDelegateDidCancel;
-(id<FBSDKSharingContent>)shareContent;
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(BOOL)show;
-(void)setDelegate:(id<FBSDKSharingDelegate>)arg1 ;
-(id<FBSDKSharingDelegate>)delegate;
-(BOOL)validateWithError:(id*)arg1 ;
@end
