/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSStackFrame : NSObject {

	unsigned _lineNumber;
	NSString* _symbol;
	NSString* _library;
	NSString* _fileName;
	unsigned long long _offset;
	unsigned long long _address;

}

@property (nonatomic,copy) NSString * symbol;                         //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy) NSString * library;                        //@synthesize library=_library - In the implementation block
@property (nonatomic,copy) NSString * fileName;                       //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned lineNumber;                     //@synthesize lineNumber=_lineNumber - In the implementation block
@property (assign,nonatomic) unsigned long long offset;               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long address;              //@synthesize address=_address - In the implementation block
+(id)stackFrameWithAddress:(unsigned long long)arg1 ;
+(id)stackFrame;
+(id)stackFrameWithSymbol:(id)arg1 ;
-(unsigned)lineNumber;
-(void)setLineNumber:(unsigned)arg1 ;
-(id)description;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(NSString *)library;
-(void)setLibrary:(NSString *)arg1 ;
-(unsigned long long)address;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end
