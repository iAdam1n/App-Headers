/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPVASTModel.h>

@class NSArray, NSDictionary;

@interface MPVASTInline : MPVASTModel {

	NSArray* _creatives;
	NSArray* _errorURLs;
	NSDictionary* _extensions;
	NSArray* _impressionURLs;

}

@property (nonatomic,readonly) NSArray * creatives;                    //@synthesize creatives=_creatives - In the implementation block
@property (nonatomic,readonly) NSArray * errorURLs;                    //@synthesize errorURLs=_errorURLs - In the implementation block
@property (nonatomic,readonly) NSDictionary * extensions;              //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,readonly) NSArray * impressionURLs;               //@synthesize impressionURLs=_impressionURLs - In the implementation block
+(id)modelMap;
-(NSArray *)errorURLs;
-(NSArray *)impressionURLs;
-(NSArray *)creatives;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)extensions;
@end
