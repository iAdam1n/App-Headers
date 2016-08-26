/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKControlWrapper : NSObject <NSCopying> {

	unsigned long long _controlEvents;
	/*^block*/id _handler;

}

@property (assign,nonatomic) unsigned long long controlEvents;              //@synthesize controlEvents=_controlEvents - In the implementation block
@property (nonatomic,copy) id handler;                                      //@synthesize handler=_handler - In the implementation block
-(id)initWithHandler:(/*^block*/id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)invoke:(id)arg1 ;
-(unsigned long long)controlEvents;
-(void)setControlEvents:(unsigned long long)arg1 ;
@end
