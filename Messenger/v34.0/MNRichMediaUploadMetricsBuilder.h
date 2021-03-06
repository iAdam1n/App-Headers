/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MNRichMediaUploadMetricsBuilder : NSObject {

	NSMutableDictionary* _attributes;
	unsigned long long _numBytesWastedCounter;
	unsigned _numFailedAttemptsCounter;
	double _percentUploaded;

}
-(void)setLogValueNumeric:(long long)arg1 forKey:(id)arg2 ;
-(void)setPercentUploaded:(double)arg1 ;
-(void)increaseNumBytesWasted:(unsigned long long)arg1 ;
-(void)incrementNumFailedAttempts;
-(void)setLogValues:(id)arg1 ;
-(void)setLogValue:(id)arg1 forKey:(id)arg2 ;
-(void)_finalizeCounters;
-(id)build;
-(id)init;
@end

