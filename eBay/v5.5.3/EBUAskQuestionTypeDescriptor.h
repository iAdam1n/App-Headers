/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EBUAskQuestionTypeDescriptor : NSObject {

	unsigned long long _questionType;
	NSString* _localizedDescription;
	NSString* _apiKey;

}

@property (assign,nonatomic) unsigned long long questionType;              //@synthesize questionType=_questionType - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSString * apiKey;                            //@synthesize apiKey=_apiKey - In the implementation block
+(id)questionType:(unsigned long long)arg1 description:(id)arg2 apiKey:(id)arg3 ;
-(void)setQuestionType:(unsigned long long)arg1 ;
-(unsigned long long)questionType;
-(NSString *)apiKey;
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setApiKey:(NSString *)arg1 ;
@end
