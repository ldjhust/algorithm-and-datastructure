.targe: all clean
CC = gcc
CPP = g++
CFLAGS = -g -Wall 
SRCDIR = ./src
INCLUDEDIR = -I ./include
PROGRAMS = BubbleSort_Demo   \
		   InsertSort_Demo   \
		   SelectSort_Demo   \
		   ShellSort_Demo    \
		   MergeSort_Demo    \
		   QuickSort_Demo    \
		   MaxHeapSort_Demo  \
		   BTPreTravelsal_Demo \
		   BTInTravelsal_Demo  \
		   BTPostTravelsal_Demo \
		   BSearch_Demo \
		   SubArrayMaxSum_Demo \
		   FindNumCountBigThanHalfSize_Demo \
		   FindNumCountMost_Demo \
		   ListNumOfNode_Demo \
		   ReverseList_Demo \
		   ReturnLastKthNodeOfList_Demo \
		   ReturnMidNodeOfList_Demo \
		   ReversePrintList_Demo \
		   MergeList_Demo \
		   ListIntersect_Demo \
		   ListFirstIntersectNode_Demo \
		   DeleteListNode_Demo \
		   ListQuickSort_Demo \
		   BTNumNode_Demo \
		   BTDepth_Demo \
		   BTLevelorder_Demo \
		   BTToDList_Demo \
		   KLevelNodeOfBT_Demo \
		   NumOfLeafNode_Demo \
		   isSameStructure_Demo \
		   isBalanceBT_Demo \
		   BTMirror_Demo \
		   BTMaxDistance_Demo \
		   RebuildBTByPreAndIn_Demo \
		   GetLastCommonAncestor_Demo \
		   isCompletedBT_Demo \
		   NonRecursionQuickSort_Demo

all: $(PROGRAMS)

%: $(SRCDIR)/%.cpp
	$(CPP) $(CFLAGS) -o $@ $< $(INCLUDEDIR) $(LIBS)

clean:
	rm -rf $(PROGRAMS)
