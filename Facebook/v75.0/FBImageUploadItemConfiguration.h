/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBImageUploadItemConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldPublish;
	BOOL _specialCasePanoramas;
	int _maximumDimension;
	double _uploadCompressionRate;

}

@property (nonatomic,readonly) BOOL shouldPublish;                        //@synthesize shouldPublish=_shouldPublish - In the implementation block
@property (nonatomic,readonly) int maximumDimension;                      //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (nonatomic,readonly) BOOL specialCasePanoramas;                 //@synthesize specialCasePanoramas=_specialCasePanoramas - In the implementation block
@property (nonatomic,readonly) double uploadCompressionRate;              //@synthesize uploadCompressionRate=_uploadCompressionRate - In the implementation block
-(id)initWithShouldPublish:(BOOL)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 uploadCompressionRate:(double)arg4 ;
-(double)uploadCompressionRate;
-(BOOL)specialCasePanoramas;
-(BOOL)shouldPublish;
-(int)maximumDimension;
@end
