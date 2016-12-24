/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSSet;

@interface FlurryPLCrashMachExceptionPortSet : NSObject <NSFastEnumeration> {

	NSSet* _state_set;
	plcrash_mach_exception_port_set _asyncSafeRepresentation;

}

@property (nonatomic,readonly) NSSet * set;                                                          //@synthesize state_set=_state_set - In the implementation block
@property (nonatomic,readonly) plcrash_mach_exception_port_set asyncSafeRepresentation;              //@synthesize asyncSafeRepresentation=_asyncSafeRepresentation - In the implementation block
-(id)initWithAsyncSafeRepresentation:(plcrash_mach_exception_port_set)arg1 ;
-(plcrash_mach_exception_port_set)asyncSafeRepresentation;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_M121*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSSet *)set;
-(id)initWithSet:(id)arg1 ;
@end
