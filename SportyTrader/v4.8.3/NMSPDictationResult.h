/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface NMSPDictationResult : NSObject {

	nmsp_dr_DictationResult_Ref dictationResult;

}
-(id)initWithBinaryResult:(id)arg1 ;
-(int)getSentenceCount;
-(id)getSentenceAt:(int)arg1 ;
-(id)initWithNmspDictationResult:(nmsp_dr_DictationResult_Ref)arg1 ;
-(void)dealloc;
@end

