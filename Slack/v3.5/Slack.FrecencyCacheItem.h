/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface Slack.FrecencyCacheItem : NSObject {

	 id;
	 count;
	 visits;
	 reduced;

}

@property (copy,nonatomic) NSString * id; 
@property (assign,nonatomic) long long count; 
@property (copy,nonatomic) NSArray * visits; 
@property (assign,nonatomic) BOOL reduced; 
-(BOOL)reduced;
-(void)setReduced:(BOOL)arg1 ;
-(id)initWithId:(id)arg1 ;
-(long long)count;
-(id)init;
-(void)setCount:(long long)arg1 ;
-(NSArray *)visits;
-(void)setVisits:(NSArray *)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
@end

