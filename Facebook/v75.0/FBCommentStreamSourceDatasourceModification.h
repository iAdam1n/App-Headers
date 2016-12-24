/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface FBCommentStreamSourceDatasourceModification : FBValueObject <NSCopying> {

	NSNumber* _index;
	NSString* _modification;
	NSString* _modelDescription;
	long long _generation;

}

@property (nonatomic,copy,readonly) NSNumber * index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * modification;                  //@synthesize modification=_modification - In the implementation block
@property (nonatomic,copy,readonly) NSString * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
@property (nonatomic,readonly) long long generation;                          //@synthesize generation=_generation - In the implementation block
-(id)initWithIndex:(id)arg1 modification:(id)arg2 modelDescription:(id)arg3 generation:(long long)arg4 ;
-(NSString *)modelDescription;
-(NSNumber *)index;
-(long long)generation;
-(NSString *)modification;
@end
