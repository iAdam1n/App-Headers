/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSData;

@interface MRAIDStorePictureOperation : NSOperation {

	NSURL* _URL;
	NSData* _imageData;

}

@property (nonatomic,retain) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
@end
