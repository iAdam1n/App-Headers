/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ATRecord.h>
#import <Gumtree/ATJSONModel.h>

@class NSString, NSData, NSNumber;

@interface ATSurveyResponse : ATRecord <ATJSONModel>

@property (nonatomic,retain) NSString * pendingSurveyResponseID; 
@property (nonatomic,retain) NSData * answersData; 
@property (nonatomic,retain) NSString * surveyID; 
@property (nonatomic,retain) NSNumber * pendingState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newInstanceWithJSON:(id)arg1 ;
+(id)findSurveyResponseWithPendingID:(id)arg1 ;
-(void)updateWithJSON:(id)arg1 ;
-(id)apiJSON;
-(id)dictionaryForAnswers;
-(id)dataForAnswersDictionary:(id)arg1 ;
-(void)setup;
-(void)awakeFromInsert;
-(void)setAnswers:(id)arg1 ;
@end

