/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/BufferedCodecUnitDataSource.h>

@protocol CodecUnitDataSource;
@interface BufferedPCM_VST_DataSource : NSObject <BufferedCodecUnitDataSource> {

	char buffer[960000];
	int index;
	int bufLimit;
	id<CodecUnitDataSource> dataSource;

}

@property (nonatomic,retain) id<CodecUnitDataSource> dataSource; 
-(void)getData:(char**)arg1 length:(long long*)arg2 andIsLastBuf:(BOOL*)arg3 ;
-(void)prepareBufferForReadSizeOf:(long long)arg1 ;
-(void)setDataSource:(id<CodecUnitDataSource>)arg1 ;
-(void)dealloc;
-(id<CodecUnitDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
@end
