/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBSwipeableFramesAsset, FBSwipeableFramesFilter, NSDictionary;

@interface FBCameraSwipeableFrameAsset : FBValueObject <NSCopying> {

	NSString* _identifier;
	FBSwipeableFramesAsset* _framesAsset;
	FBSwipeableFramesFilter* _filter;
	NSDictionary* _loggingExtras;

}

@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBSwipeableFramesAsset * framesAsset;              //@synthesize framesAsset=_framesAsset - In the implementation block
@property (nonatomic,copy,readonly) FBSwipeableFramesFilter * filter;                  //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * loggingExtras;                      //@synthesize loggingExtras=_loggingExtras - In the implementation block
-(NSDictionary *)loggingExtras;
-(id)initWithIdentifier:(id)arg1 framesAsset:(id)arg2 filter:(id)arg3 loggingExtras:(id)arg4 ;
-(FBSwipeableFramesAsset *)framesAsset;
-(NSString *)identifier;
-(FBSwipeableFramesFilter *)filter;
@end
