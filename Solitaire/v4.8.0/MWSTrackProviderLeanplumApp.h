/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWSTrackProviderLeanplum.h>

@class MWSTrackEventExit;

@interface MWSTrackProviderLeanplumApp : MWSTrackProviderLeanplum {

	MWSTrackEventExit* _exitEvent;

}

@property (nonatomic,retain) MWSTrackEventExit * exitEvent;              //@synthesize exitEvent=_exitEvent - In the implementation block
-(void)setExitEvent:(MWSTrackEventExit *)arg1 ;
-(MWSTrackEventExit *)exitEvent;
-(void)handleSetupAfterStart;
-(void)sendEvent:(id)arg1 Dictionary:(id)arg2 Value:(id)arg3 Info:(id)arg4 ;
-(void)handleSetupBeforeStart;
-(id)getDataFromLPActionContext:(id)arg1 WithParam:(id)arg2 ;
-(id)formatRogueActionIdentifiers:(id)arg1 withMWSTrackData:(id)arg2 ;
-(id)convertMessageParamsToProviderFormat:(id)arg1 KeyList:(id)arg2 ;
-(id)getGroupNameFromKeyList:(id)arg1 ;
-(id)makeLPActionArgWithName:(id)arg1 Data:(id)arg2 Type:(int)arg3 ;
-(id)convertDataForMessage:(id)arg1 ;
-(id)convertActionLPActionContext:(id)arg1 ToData:(id)arg2 ;
-(id)convertTemplateLPActionContext:(id)arg1 ToData:(id)arg2 ;
-(id)getDocumentDirectory;
-(int)legalProviderCapabilities;
-(void)defineAction:(id)arg1 Completion:(/*^block*/id)arg2 ;
-(void)defineMessage:(id)arg1 Completion:(/*^block*/id)arg2 ;
-(id)getProviderDirectory;
@end
