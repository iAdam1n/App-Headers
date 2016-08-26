/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WATarFileProcessor.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAHardLinker : NSObject <WATarFileProcessor> {

	NSMutableArray* _potentialLinks;
	NSMutableDictionary* _hashLookup;
	NSMutableDictionary* _relativePathLookup;
	CC_SHA256state_st _hashContext;
	CC_SHA256state_st* _hashContextPtr;
	unsigned long long _currentOffset;
	unsigned long long _firstChange;
	unsigned long long _totalSaved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addPotentialLink:(id)arg1 to:(id)arg2 ;
-(void)tarFile:(id)arg1 didStartHeader:(id)arg2 ;
-(void)tarFile:(id)arg1 didReadBytes:(const void*)arg2 ofLength:(unsigned long long)arg3 ;
-(void)tarFile:(id)arg1 didFinishHeader:(id)arg2 withResult:(unsigned long long)arg3 ;
-(id)init;
-(void)print;
@end
