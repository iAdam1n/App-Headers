/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdPreviewFetcherDelegate;
@class FBUserSession, NSString;

@interface FBAdPreviewFetcher : NSObject {

	FBUserSession* _session;
	NSString* _adPreviewID;
	id<FBAdPreviewFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAdPreviewFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)downloadStory;
-(id)initWithAdPreviewID:(id)arg1 session:(id)arg2 ;
-(void)setDelegate:(id<FBAdPreviewFetcherDelegate>)arg1 ;
-(id<FBAdPreviewFetcherDelegate>)delegate;
@end
