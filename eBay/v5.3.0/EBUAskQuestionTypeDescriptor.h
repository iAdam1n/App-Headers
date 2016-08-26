/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
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
