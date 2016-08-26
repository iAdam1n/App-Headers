/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <UIKit/UIImageView.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSMutableData, NSString;

@interface SocialImageView : UIImageView <NSURLConnectionDataDelegate> {

	NSMutableData* _imageData;

}

@property (nonatomic,retain) NSMutableData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupImageData;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setImageData:(NSMutableData *)arg1 ;
-(void)setImageURL:(id)arg1 ;
-(NSMutableData *)imageData;
@end
