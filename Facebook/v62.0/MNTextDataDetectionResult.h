/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNDetectedData, MNDetectedDataViewModel;

@interface MNTextDataDetectionResult : FBValueObject <NSCopying> {

	MNDetectedData* _detectedData;
	MNDetectedDataViewModel* _detectedDataViewModel;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                                                     //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) MNDetectedData * detectedData;                                //@synthesize detectedData=_detectedData - In the implementation block
@property (nonatomic,copy,readonly) MNDetectedDataViewModel * detectedDataViewModel;              //@synthesize detectedDataViewModel=_detectedDataViewModel - In the implementation block
-(MNDetectedDataViewModel *)detectedDataViewModel;
-(id)initWithRange:(NSRange)arg1 detectedData:(id)arg2 detectedDataViewModel:(id)arg3 ;
-(MNDetectedData *)detectedData;
-(NSRange)range;
@end
