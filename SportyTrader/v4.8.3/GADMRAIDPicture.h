/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol GADMRAIDPictureDelegate;
@class NSURL, NSString;

@interface GADMRAIDPicture : NSObject <NSURLConnectionDataDelegate, UIAlertViewDelegate> {

	BOOL _downloadStarted;
	NSURL* _pictureURL;
	id<GADMRAIDPictureDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GADMRAIDPictureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadImageWithURL:(id)arg1 ;
-(void)storeImage:(id)arg1 ;
-(void)storeInPhotoAlbum;
-(void)setDelegate:(id<GADMRAIDPictureDelegate>)arg1 ;
-(id<GADMRAIDPictureDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithURL:(id)arg1 ;
@end

