/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FlurryMinizipZipArchive : NSObject {

	void* _zipFile;
	void* _unzFile;
	NSString* _password;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)UnzipOpenFile:(id)arg1 ;
-(BOOL)UnzipFileTo:(id)arg1 overWrite:(BOOL)arg2 ;
-(BOOL)UnzipCloseFile;
-(BOOL)CloseZipFile2;
-(BOOL)CreateZipFile2:(id)arg1 ;
-(void)OutputErrorMessage:(id)arg1 ;
-(BOOL)OverWrite:(id)arg1 ;
-(BOOL)CreateZipFile2:(id)arg1 Password:(id)arg2 ;
-(BOOL)addFileToZip:(id)arg1 newname:(id)arg2 ;
-(BOOL)UnzipOpenFile:(id)arg1 Password:(id)arg2 ;
-(id)Date1980;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
@end

