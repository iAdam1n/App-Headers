/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CARROT/CARROT-Structs.h>
#import <CARROT/NSFastEnumeration.h>

@class NSSet;

@interface FlurryPLCrashMachExceptionPortSet : NSObject <NSFastEnumeration> {

	NSSet* _state_set;
	plcrash_mach_exception_port_set _asyncSafeRepresentation;

}

@property (nonatomic,readonly) NSSet * set;                                                          //@synthesize state_set=_state_set - In the implementation block
@property (nonatomic,readonly) plcrash_mach_exception_port_set asyncSafeRepresentation;              //@synthesize asyncSafeRepresentation=_asyncSafeRepresentation - In the implementation block
-(plcrash_mach_exception_port_set)asyncSafeRepresentation;
-(id)initWithAsyncSafeRepresentation:(plcrash_mach_exception_port_set)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_Fl10*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(NSSet *)set;
-(id)initWithSet:(id)arg1 ;
@end

