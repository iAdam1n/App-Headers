/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
+(id)stackFrame;
+(id)stackFrameWithSymbol:(id)arg1 ;
+(id)stackFrameWithAddress:(unsigned long long)arg1 ;
-(unsigned)lineNumber;
-(NSString *)library;
-(void)setLibrary:(NSString *)arg1 ;
-(void)setLineNumber:(unsigned)arg1 ;
-(unsigned long long)address;
-(id)description;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

