/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BugsnagMetaDataDelegate.h>

@class BugsnagConfiguration, BugsnagMetaData, NSDictionary, NSLock, NSString;

@interface BugsnagNotifier : NSObject <BugsnagMetaDataDelegate> {

	BugsnagConfiguration* configuration;
	BugsnagMetaData* _state;
	NSDictionary* _details;
	NSLock* _metaDataLock;

}

@property (nonatomic,retain) BugsnagConfiguration * configuration; 
@property (nonatomic,retain) BugsnagMetaData * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSDictionary * details;                            //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) NSLock * metaDataLock;                             //@synthesize metaDataLock=_metaDataLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetaDataLock:(NSLock *)arg1 ;
-(void)metaDataChanged:(id)arg1 ;
-(void)sendPendingReports;
-(NSLock *)metaDataLock;
-(void)serializeDictionary:(id)arg1 toJSON:(char**)arg2 ;
-(void)notify:(id)arg1 withData:(id)arg2 atSeverity:(id)arg3 atDepth:(unsigned long long)arg4 ;
-(BugsnagMetaData *)state;
-(void)setState:(BugsnagMetaData *)arg1 ;
-(void)start;
-(void)setConfiguration:(BugsnagConfiguration *)arg1 ;
-(BugsnagConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
@end

