/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SKVocalizer.h>
#import <SportyTrader/NMSPTransactionDelegate.h>

@class NMSPTransaction, NSString, PDXDictionary, NSMutableArray, NSLock;

@interface SKVocalizerImpl : SKVocalizer <NMSPTransactionDelegate> {

	NMSPTransaction* transaction;
	NSString* SKVoiceVocalizerText;
	unsigned char isInitialized;
	unsigned char isProcessing;
	unsigned char isPlaying;
	PDXDictionary* commandInfo;
	NSMutableArray* queuedTransaction;
	NSLock* queueLock;
	BOOL notifiedFinalOutcome;

}

@property (nonatomic,retain) NMSPTransaction * transaction; 
-(BOOL)transaction:(id)arg1 response:(int)arg2 withContextData:(id)arg3 ;
-(void)transactionPlaybackStarted:(id)arg1 ;
-(void)transactionPlaybackComplete:(id)arg1 ;
-(id)initWithLanguage:(id)arg1 voice:(id)arg2 delegate:(id)arg3 ;
-(void)processRequest;
-(void)speakString:(id)arg1 ofType:(id)arg2 ;
-(id)initWithLanguage:(id)arg1 delegate:(id)arg2 ;
-(id)initWithVoice:(id)arg1 delegate:(id)arg2 ;
-(void)speakString:(id)arg1 ;
-(void)speakMarkupString:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NMSPTransaction *)transaction;
-(void)setTransaction:(NMSPTransaction *)arg1 ;
@end
