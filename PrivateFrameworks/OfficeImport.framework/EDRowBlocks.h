/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, NSString, NSRecursiveLock, EDWorksheet, NSMutableArray;

@interface EDRowBlocks : NSObject <TSUFlushable> {
    EDWorksheet *mWorksheet;
    NSMutableArray *mRowBlocks;
    EDCollection *mFormulas;
    unsigned int mMaxPopulatedRow;
    unsigned int mMaxPopulatedColumn;
    NSString *mFileName;
    int mLockCount;
    NSRecursiveLock *mSaveLoadLock;
}


- (void)lock;
- (void)save;
- (void)unlock;
- (void)flush;
- (void)dealloc;
- (id)rowBlockAtIndex:(unsigned int)arg1;
- (void)removeRowBlockAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfRowBlockForRowNumber:(unsigned int)arg1;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2;
- (struct EDCellHeader { unsigned short x1; unsigned int x2; }*)cellWithRowNumber:(unsigned int)arg1 columnNumber:(int)arg2;
- (unsigned int)maxPopulatedColumn;
- (bool)spaceForRowNumber:(unsigned int)arg1 rowBlock:(id)arg2;
- (id)fileNameForPersistingRowBlocks;
- (void)load;
- (unsigned char)formulaTypeForFormula:(id)arg1;
- (Class)classForFormulaType:(unsigned char)arg1;
- (void)updateMaxPopulatedRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (unsigned int)expectedIndexOfRowBlockForRowNumber:(unsigned int)arg1;
- (id)initWithWorksheet:(id)arg1;
- (id)formulas;
- (unsigned int)rowBlockCount;
- (unsigned int)maxPopulatedRow;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2 createIfNil:(bool)arg3;

@end