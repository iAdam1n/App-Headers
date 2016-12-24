/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSIndexPath;

@interface SKPArrayControllerPlaceholder : NSObject {

	id<NSObject> _referenceObject;
	NSIndexPath* _absoluteOldIndexPath;
	NSIndexPath* _absoluteNewIndexPath;

}

@property (nonatomic,readonly) id<NSObject> referenceObject;                  //@synthesize referenceObject=_referenceObject - In the implementation block
@property (nonatomic,retain) NSIndexPath * absoluteOldIndexPath;              //@synthesize absoluteOldIndexPath=_absoluteOldIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * absoluteNewIndexPath;              //@synthesize absoluteNewIndexPath=_absoluteNewIndexPath - In the implementation block
-(id)initWithReferenceObject:(id)arg1 ;
-(NSIndexPath *)absoluteOldIndexPath;
-(void)setAbsoluteOldIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)absoluteNewIndexPath;
-(void)setAbsoluteNewIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)referenceObject;
@end
