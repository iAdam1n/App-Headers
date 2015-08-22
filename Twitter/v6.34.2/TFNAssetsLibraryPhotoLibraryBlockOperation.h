/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError;

@interface TFNAssetsLibraryPhotoLibraryBlockOperation : NSOperation {

	/*^block*/id _block;
	id _result;
	NSError* _error;

}

@property (nonatomic,readonly) id result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)main;
-(id)result;
-(NSError *)error;
@end
