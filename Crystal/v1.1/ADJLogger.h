/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:35 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Crystal/ADJLogger.h>

@protocol ADJLogger
@required
-(void)info:(id)arg1;
-(void)debug:(id)arg1;
-(void)verbose:(id)arg1;
-(void)assert:(id)arg1;
-(void)setLogLevel:(int)arg1;
-(void)error:(id)arg1;
-(void)warn:(id)arg1;

@end


@interface ADJLogger : NSObject <ADJLogger> {

	int _loglevel;

}

@property (assign,nonatomic) int loglevel;              //@synthesize loglevel=_loglevel - In the implementation block
+(int)LogLevelFromString:(id)arg1 ;
-(void)info:(id)arg1 ;
-(void)debug:(id)arg1 ;
-(void)verbose:(id)arg1 ;
-(int)loglevel;
-(void)logLevel:(id)arg1 format:(id)arg2 parameters:(char*)arg3 ;
-(void)assert:(id)arg1 ;
-(void)setLogLevel:(int)arg1 ;
-(void)error:(id)arg1 ;
-(void)warn:(id)arg1 ;
-(void)setLoglevel:(int)arg1 ;
@end

