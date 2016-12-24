/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPerson, FBMemFaceBox, NSString;

@interface FBVideoTagSuggestionItem : FBValueObject <NSCopying> {

	float _blurMeasure;
	FBMemPerson* _person;
	FBMemFaceBox* _faceBox;
	NSString* _videoAssetID;
	SCD_Struct_FB25 _time;

}

@property (nonatomic,copy,readonly) FBMemPerson * person;                 //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) FBMemFaceBox * faceBox;               //@synthesize faceBox=_faceBox - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoAssetID;              //@synthesize videoAssetID=_videoAssetID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 time;                      //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) float blurMeasure;                         //@synthesize blurMeasure=_blurMeasure - In the implementation block
-(FBMemFaceBox *)faceBox;
-(NSString *)videoAssetID;
-(id)initWithPerson:(id)arg1 faceBox:(id)arg2 videoAssetID:(id)arg3 time:(SCD_Struct_FB25)arg4 blurMeasure:(float)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(FBMemPerson *)person;
-(SCD_Struct_FB25)time;
-(float)blurMeasure;
@end
