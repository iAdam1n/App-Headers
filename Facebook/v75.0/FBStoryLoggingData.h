/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBStoryLoggingData : FBGraphQLInput {

	NSString* _composerSessionId;
	NSString* _audienceExperiment;
	NSString* _specificPeopleChosen;

}

@property (nonatomic,copy) NSString * composerSessionId;                 //@synthesize composerSessionId=_composerSessionId - In the implementation block
@property (nonatomic,copy) NSString * audienceExperiment;                //@synthesize audienceExperiment=_audienceExperiment - In the implementation block
@property (nonatomic,copy) NSString * specificPeopleChosen;              //@synthesize specificPeopleChosen=_specificPeopleChosen - In the implementation block
-(NSString *)composerSessionId;
-(void)setComposerSessionId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)audienceExperiment;
-(void)setAudienceExperiment:(NSString *)arg1 ;
-(NSString *)specificPeopleChosen;
-(void)setSpecificPeopleChosen:(NSString *)arg1 ;
@end
