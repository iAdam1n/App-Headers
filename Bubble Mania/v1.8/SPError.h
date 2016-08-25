/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPError : NSObject {

	NSString* _title;
	NSString* _message;
	long long _code;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long code;                //@synthesize code=_code - In the implementation block
-(id)initWithError:(id)arg1 code:(long long)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 code:(long long)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)code;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCode:(long long)arg1 ;
@end

