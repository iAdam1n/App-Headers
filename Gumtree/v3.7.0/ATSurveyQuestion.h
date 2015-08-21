/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSCoding.h>

@class NSString, NSMutableArray;

@interface ATSurveyQuestion : NSObject <NSCoding> {

	BOOL responseRequired;
	BOOL multiline;
	int type;
	NSString* identifier;
	NSString* questionText;
	NSString* instructionsText;
	NSString* value;
	NSMutableArray* answerChoices;
	NSString* answerText;
	NSMutableArray* selectedAnswerChoices;
	unsigned long long minSelectionCount;
	unsigned long long maxSelectionCount;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,getter=responseIsRequired,nonatomic) BOOL responseRequired; 
@property (nonatomic,copy) NSString * questionText; 
@property (nonatomic,copy) NSString * instructionsText; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,readonly) NSMutableArray * answerChoices; 
@property (nonatomic,copy) NSString * answerText; 
@property (nonatomic,retain) NSMutableArray * selectedAnswerChoices; 
@property (assign,nonatomic) unsigned long long minSelectionCount; 
@property (assign,nonatomic) unsigned long long maxSelectionCount; 
@property (assign,nonatomic) BOOL multiline; 
-(void)setResponseRequired:(BOOL)arg1 ;
-(BOOL)responseIsRequired;
-(void)setMultiline:(BOOL)arg1 ;
-(void)setMaxSelectionCount:(unsigned long long)arg1 ;
-(void)setMinSelectionCount:(unsigned long long)arg1 ;
-(void)addAnswerChoice:(id)arg1 ;
-(void)setQuestionText:(NSString *)arg1 ;
-(void)setInstructionsText:(NSString *)arg1 ;
-(void)setAnswerText:(NSString *)arg1 ;
-(BOOL)multiline;
-(NSMutableArray *)answerChoices;
-(NSMutableArray *)selectedAnswerChoices;
-(NSString *)answerText;
-(void)addSelectedAnswerChoice:(id)arg1 ;
-(void)removeSelectedAnswerChoice:(id)arg1 ;
-(int)validateAnswer;
-(NSString *)questionText;
-(NSString *)instructionsText;
-(void)setSelectedAnswerChoices:(NSMutableArray *)arg1 ;
-(unsigned long long)minSelectionCount;
-(unsigned long long)maxSelectionCount;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)reset;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
@end

