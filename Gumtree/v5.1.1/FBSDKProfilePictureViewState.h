/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSString;

@interface FBSDKProfilePictureViewState : NSObject {

	BOOL _imageShouldFit;
	unsigned long long _pictureMode;
	NSString* _profileID;
	double _scale;
	CGSize _size;

}

@property (nonatomic,readonly) BOOL imageShouldFit;                         //@synthesize imageShouldFit=_imageShouldFit - In the implementation block
@property (nonatomic,readonly) unsigned long long pictureMode;              //@synthesize pictureMode=_pictureMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileID;                   //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,readonly) double scale;                                //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize size;                                 //@synthesize size=_size - In the implementation block
-(BOOL)isValidForState:(id)arg1 ;
-(id)initWithProfileID:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 pictureMode:(unsigned long long)arg4 imageShouldFit:(BOOL)arg5 ;
-(BOOL)imageShouldFit;
-(unsigned long long)pictureMode;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)scale;
-(NSString *)profileID;
-(BOOL)isEqualToState:(id)arg1 ;
@end
