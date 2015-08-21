/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1NativeCardAppStorePresenter.h>

@protocol T1NativeCardAppStorePresenter <NSObject>
@property (assign,nonatomic,__weak) id<T1NativeCardAppStorePresenterDelegate> delegate; 
@required
-(void)openAppForStatus:(id)arg1 context:(id)arg2 viewEvent:(id)arg3;
-(void)openAppStoreForContext:(id)arg1;
-(void)redeemAppForContext:(id)arg1 viewEvent:(id)arg2;
-(void)previewAppForContext:(id)arg1 viewEvent:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id<T1NativeCardAppStorePresenterDelegate>)delegate;

@end


@protocol T1NativeCardAppStorePresenterDelegate, T1NativeCardURLPresenter, T1NativeMediaAppCardVideoPresenter, TFNCancellable;
@class NSString;

@interface T1NativeCardAppStorePresenter : NSObject <T1NativeCardAppStorePresenter> {

	id<T1NativeCardAppStorePresenterDelegate> _delegate;
	id<T1NativeCardURLPresenter> _urlPresenter;
	id<T1NativeMediaAppCardVideoPresenter> _videoPresenter;
	id<TFNCancellable> _openAppLinkCancellable;

}

@property (nonatomic,retain) id<T1NativeCardURLPresenter> urlPresenter;                              //@synthesize urlPresenter=_urlPresenter - In the implementation block
@property (nonatomic,retain) id<T1NativeMediaAppCardVideoPresenter> videoPresenter;                  //@synthesize videoPresenter=_videoPresenter - In the implementation block
@property (nonatomic,retain) id<TFNCancellable> openAppLinkCancellable;                              //@synthesize openAppLinkCancellable=_openAppLinkCancellable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<T1NativeCardAppStorePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)openAppForStatus:(id)arg1 context:(id)arg2 viewEvent:(id)arg3 ;
-(void)openAppStoreForContext:(id)arg1 ;
-(void)redeemAppForContext:(id)arg1 viewEvent:(id)arg2 ;
-(void)previewAppForContext:(id)arg1 viewEvent:(id)arg2 ;
-(void)setOpenAppLinkCancellable:(id<TFNCancellable>)arg1 ;
-(id<TFNCancellable>)openAppLinkCancellable;
-(id<T1NativeCardURLPresenter>)urlPresenter;
-(id<T1NativeMediaAppCardVideoPresenter>)videoPresenter;
-(void)setUrlPresenter:(id<T1NativeCardURLPresenter>)arg1 ;
-(void)setVideoPresenter:(id<T1NativeMediaAppCardVideoPresenter>)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<T1NativeCardAppStorePresenterDelegate>)arg1 ;
-(id)init;
-(id<T1NativeCardAppStorePresenterDelegate>)delegate;
@end

