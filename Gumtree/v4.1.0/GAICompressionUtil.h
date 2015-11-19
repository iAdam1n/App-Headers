/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface GAICompressionUtil : NSObject
+(id)gai_dataByDeflatingData:(id)arg1 ;
+(id)gai_dataByGzippingData:(id)arg1 ;
+(id)gai_dataByCompressingBytes:(const void*)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 mode:(int)arg4 ;
+(id)gai_dataByInflatingBytes:(const void*)arg1 length:(unsigned long long)arg2 isRawData:(BOOL)arg3 ;
+(id)gai_dataByGzippingBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)gai_dataByGzippingBytes:(const void*)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 ;
+(id)gai_dataByGzippingData:(id)arg1 compressionLevel:(int)arg2 ;
+(id)gai_dataByDeflatingBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)gai_dataByDeflatingBytes:(const void*)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 ;
+(id)gai_dataByDeflatingData:(id)arg1 compressionLevel:(int)arg2 ;
+(id)gai_dataByInflatingBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)gai_dataByInflatingData:(id)arg1 ;
+(id)gai_dataByRawDeflatingBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)gai_dataByRawDeflatingData:(id)arg1 ;
+(id)gai_dataByRawDeflatingBytes:(const void*)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 ;
+(id)gai_dataByRawDeflatingData:(id)arg1 compressionLevel:(int)arg2 ;
+(id)gai_dataByRawInflatingBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)gai_dataByRawInflatingData:(id)arg1 ;
@end

