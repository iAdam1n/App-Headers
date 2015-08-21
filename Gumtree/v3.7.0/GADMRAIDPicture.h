/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSURLConnectionDataDelegate.h>
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
-(void)storeInPhotoAlbum;
-(void)downloadImageWithURL:(id)arg1 ;
-(void)storeImage:(id)arg1 ;
-(void)setDelegate:(id<GADMRAIDPictureDelegate>)arg1 ;
-(id<GADMRAIDPictureDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)initWithURL:(id)arg1 ;
@end

