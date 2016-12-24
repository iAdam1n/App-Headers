/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemGraphSearchQuery, NSString;

@interface FBSearchResultsSpellingCorrectionModel : FBValueObject <NSCopying> {

	FBMemGraphSearchQuery* _correctedQuery;
	NSString* _confidence;
	FBMemGraphSearchQuery* _currentQuery;

}

@property (nonatomic,copy,readonly) FBMemGraphSearchQuery * correctedQuery;              //@synthesize correctedQuery=_correctedQuery - In the implementation block
@property (nonatomic,copy,readonly) NSString * confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy,readonly) FBMemGraphSearchQuery * currentQuery;                //@synthesize currentQuery=_currentQuery - In the implementation block
-(id)initWithCorrectedQuery:(id)arg1 confidence:(id)arg2 currentQuery:(id)arg3 ;
-(NSString *)confidence;
-(FBMemGraphSearchQuery *)currentQuery;
-(FBMemGraphSearchQuery *)correctedQuery;
@end
