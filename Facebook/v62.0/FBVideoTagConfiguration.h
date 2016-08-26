/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBVideoTagConfiguration : FBValueObject <NSCopying> {

	long long _faceDetectAlgorithm;
	long long _faceDetectAccuracy;
	long long _serverSuggestionThreshold;
	CGSize _sampleSize;
	SCD_Struct_FB257 _sampleInterval;
	SCD_Struct_FB257 _sampleToleranceBefore;
	SCD_Struct_FB257 _sampleToleranceAfter;

}

@property (nonatomic,readonly) CGSize sampleSize;                                   //@synthesize sampleSize=_sampleSize - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB257 sampleInterval;                     //@synthesize sampleInterval=_sampleInterval - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB257 sampleToleranceBefore;              //@synthesize sampleToleranceBefore=_sampleToleranceBefore - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB257 sampleToleranceAfter;               //@synthesize sampleToleranceAfter=_sampleToleranceAfter - In the implementation block
@property (nonatomic,readonly) long long faceDetectAlgorithm;                       //@synthesize faceDetectAlgorithm=_faceDetectAlgorithm - In the implementation block
@property (nonatomic,readonly) long long faceDetectAccuracy;                        //@synthesize faceDetectAccuracy=_faceDetectAccuracy - In the implementation block
@property (nonatomic,readonly) long long serverSuggestionThreshold;                 //@synthesize serverSuggestionThreshold=_serverSuggestionThreshold - In the implementation block
-(id)initWithSampleSize:(CGSize)arg1 sampleInterval:(SCD_Struct_FB257)arg2 sampleToleranceBefore:(SCD_Struct_FB257)arg3 sampleToleranceAfter:(SCD_Struct_FB257)arg4 faceDetectAlgorithm:(long long)arg5 faceDetectAccuracy:(long long)arg6 serverSuggestionThreshold:(long long)arg7 ;
-(CGSize)sampleSize;
-(SCD_Struct_FB257)sampleInterval;
-(SCD_Struct_FB257)sampleToleranceBefore;
-(SCD_Struct_FB257)sampleToleranceAfter;
-(long long)faceDetectAlgorithm;
-(long long)faceDetectAccuracy;
-(long long)serverSuggestionThreshold;
@end
