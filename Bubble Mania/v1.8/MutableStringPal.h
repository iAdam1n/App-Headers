/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface MutableStringPal : NSObject {

	NSMutableString* mutableString;

}

@property (nonatomic,readonly) long long length; 
@property (nonatomic,retain) NSMutableString * mutableString; 
+(id)stringWithData:(id)arg1 ;
+(id)stringWithFormat:(id)arg1 ;
+(id)string;
+(id)stringWithString:(id)arg1 ;
+(id)stringWithCapacity:(int)arg1 ;
-(void)setMutableString:(NSMutableString *)arg1 ;
-(id)debugString;
-(void)replaceCharactersInRangeFrom:(int)arg1 spanning:(int)arg2 withString:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(long long)length;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(NSMutableString *)mutableString;
-(id)initWithString:(id)arg1 ;
-(void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
@end

