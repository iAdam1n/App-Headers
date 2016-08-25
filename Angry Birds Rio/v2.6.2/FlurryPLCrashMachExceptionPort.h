/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FlurryPLCrashMachExceptionPort : NSObject {

	unsigned _mask;
	unsigned _port;
	int _behavior;
	int _flavor;

}

@property (nonatomic,readonly) unsigned server_port;              //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned mask;                     //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) int behavior;                      //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) int flavor;                        //@synthesize flavor=_flavor - In the implementation block
+(id)exceptionPortsForTask:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3 ;
+(id)exceptionPortsForThread:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)registerForTask:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3 ;
-(BOOL)registerForThread:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3 ;
-(unsigned)server_port;
-(id)initWithServerPort:(unsigned)arg1 mask:(unsigned)arg2 behavior:(int)arg3 flavor:(int)arg4 ;
-(void)dealloc;
-(unsigned)mask;
-(int)behavior;
-(int)flavor;
@end

