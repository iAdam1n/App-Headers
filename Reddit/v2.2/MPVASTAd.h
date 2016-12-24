/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPVASTModel.h>

@class NSString, MPVASTInline, MPVASTWrapper;

@interface MPVASTAd : MPVASTModel {

	NSString* _identifier;
	NSString* _sequence;
	MPVASTInline* _inlineAd;
	MPVASTWrapper* _wrapper;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sequence;                //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) MPVASTInline * inlineAd;                 //@synthesize inlineAd=_inlineAd - In the implementation block
@property (nonatomic,readonly) MPVASTWrapper * wrapper;                 //@synthesize wrapper=_wrapper - In the implementation block
+(id)modelMap;
-(MPVASTInline *)inlineAd;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(MPVASTWrapper *)wrapper;
-(NSString *)sequence;
@end
