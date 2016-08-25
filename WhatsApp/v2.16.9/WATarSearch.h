/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WATarFile;

@interface WATarSearch : NSObject {

	unsigned long long _cachedFileSize;
	WATarFile* _file;
	/*^block*/id _validator;

}

@property (assign,nonatomic,__weak) WATarFile * file;              //@synthesize file=_file - In the implementation block
@property (nonatomic,copy) id validator;                           //@synthesize validator=_validator - In the implementation block
-(unsigned long long)seekToFindIndexWithCancellationBlock:(/*^block*/id)arg1 ;
-(BOOL)isOffsetValid:(unsigned long long)arg1 ;
-(id)checkFileAtOffset:(unsigned long long)arg1 ;
-(id)init;
-(void)setValidator:(id)arg1 ;
-(id)validator;
-(id)initWithFile:(id)arg1 ;
-(void)setFile:(WATarFile *)arg1 ;
-(WATarFile *)file;
@end

